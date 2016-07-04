//
//  Vehicle.h
//  Vehicles
//
//  Created by Transferred on 9/8/13.
//  Copyright (c) 2013 Designated Nerd Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Vehicle : NSObject

@property (nonatomic,assign) int numberOfWheels;
@property (nonatomic,copy) NSString * powerSource;
@property (nonatomic,copy) NSString * brandName;
@property (nonatomic,copy) NSString * modelName;
@property (nonatomic,assign) int modelYear;


-(NSString *)goForward;
-(NSString *)goBackward;
-(NSString *)stopMoving;
-(NSString *)changeGears:(NSString *)newGearName;
-(NSString *)turn: (int)degrees;
-(NSString *)makeNoise;








@end
