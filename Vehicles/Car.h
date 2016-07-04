//
//  Car.h
//  Vehicles
//
//  Created by Viviane Chan on 2016-07-04.
//  Copyright © 2016 Designated Nerd Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Vehicle.h"

@interface Car : Vehicle

@property (nonatomic, assign) BOOL isConvertible;
@property (nonatomic, assign) BOOL isHatchback;
@property (nonatomic, assign) BOOL hasSunroof;
@property (nonatomic, assign) int numberOfDoors;

@end
