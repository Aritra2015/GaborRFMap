//
//  GRFDigitalOut.h
//  GRFMap
//
//  Created by Marlene Cohen on 12/6/07.
//  Copyright 2007 . All rights reserved.
//

#import "GRF.h"
#import <LablibITC18/LablibITC18.h>

@interface GRFDigitalOut : NSObject {

	LLITC18DataDevice		*digitalOutDevice;
	NSLock					*lock;

}

- (BOOL)outputEvent:(long)event withData:(long)data;

@end
