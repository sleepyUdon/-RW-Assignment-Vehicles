//
//  Car.m
//  Vehicles
//
//  Created by Viviane Chan on 2016-07-04.
//  Copyright © 2016 Designated Nerd Software. All rights reserved.
//

#import "Car.h"

@implementation Car

-(id)init
{
    if (self = [super init]) {
        //Since all cars have four wheels, we can safely set this for every initialized instance
        //of a car.
        self.numberOfWheels = 4;
    }
    
    return self;
}


    - (NSString *)start
    {
        return [NSString stringWithFormat:@"Start power source %@.", self.powerSource];
    }
    

    -(NSString *)goForward
    {
        return [NSString stringWithFormat: @"%@ %@ Then depress gas pedal.", [self start],[self changeGears: @"Forward"]];
    }
    
    -(NSString *)goBackward
    {
        return [NSString stringWithFormat: @"%@ %@ Check your rear view mirror. Then depress the gas pedal", [self start],[self changeGears: @"Reverse"]];
    }
    
    -(NSString *)stopMoving
    {
        return [NSString stringWithFormat: @"Depress brake pedals.", [self changeGears: @"Park"]];
    }
    
    
    
    
    -(NSString *)makeNoise
    {
        return @"Beep beep!";
    }
    

@end
