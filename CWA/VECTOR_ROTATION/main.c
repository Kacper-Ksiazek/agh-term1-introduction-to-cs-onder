#include <stdio.h>
#include <math.h>

const double PI = 3.141592653589;

struct Point {
    double x;
    double y;
};
struct Segment {
    struct Point a;
    struct Point b;
};

//
// Functions' definitions:
double getAngleFromUser();
void printSegment(struct Segment *segment);
struct Point getPointFromUser(char pointID[]);
struct Segment rotateSegmentByAngle(struct Segment *segment, double angle);

//
//
int main(){
    printf("Dane wejsciowe:\n");
    
    struct Segment initialSegment = {
        .a = getPointFromUser("a"),
        .b = getPointFromUser("b")
    };

    // struct Point a = {
    //     .x = 1,
    //     .y = 1
    // };
    // struct Point b = {
    //     .x = 5,
    //     .y = -1
    // };
    
    double angle = getAngleFromUser();
    // double angle = 0.523598776;

    struct Segment finalSegment = rotateSegmentByAngle(&initialSegment, angle);

    printf("---\nWynik:\n");
    printf("Wartosc kata w radianach: %lf\n", angle);
    printf("Wspolrzedne obroconego odcinka:\n");
    printSegment(&finalSegment);

    return 0;
}

struct Point getPointFromUser(char pointID[]){
    struct Point result = {};
    printf("Punkt %s\n", pointID);
    
    printf(" - Podaj wspolrzedna x: ");
    scanf("%lf", &result.x);
    printf(" - Podaj wspolrzedna y: ");
    scanf("%lf", &result.y);

    return result;
}

double getAngleFromUser(){
    double x;
    printf("Podaj miare kate w stopaniach: ");
    scanf_s("%lf",&x);

    return (x*PI) / 180;
}

struct Segment rotateSegmentByAngle(struct Segment *segment, double angle){
    double valueOfSinus = sin(angle);
    double valueOfCosinus = cos(angle);

    struct Point midpoint = {
        .x = (segment->a.x + segment->b.x)/2,
        .y = (segment->a.y + segment->b.y)/2,
    };

    struct Segment translatedIntoOrigin = {
        .a={
            .x = segment->a.x - midpoint.x,
            .y = segment->a.y - midpoint.y
        },
        .b={
            .x = segment->b.x - midpoint.x,
            .y = segment->b.y - midpoint.y
        }
    };

    struct Segment result = {
        .a={
            .x = (translatedIntoOrigin.a.x * valueOfCosinus - translatedIntoOrigin.a.y * valueOfSinus)  + midpoint.x,
            .y = (translatedIntoOrigin.a.x * valueOfSinus + translatedIntoOrigin.a.y * valueOfCosinus) + midpoint.y,
        },
        .b={
            .x = (translatedIntoOrigin.b.x * valueOfCosinus - translatedIntoOrigin.b.y * valueOfSinus) + midpoint.x,
            .y = (translatedIntoOrigin.b.x * valueOfSinus + translatedIntoOrigin.b.y * valueOfCosinus) + midpoint.y,
        }
    };

    return result;
}

void printSegment(struct Segment *segment){
    printf("a: (%lf, %lf),\nb: (%lf, %lf)", segment->a.x,segment->a.y,segment->b.x,segment->b.y);
}