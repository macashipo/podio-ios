//
//  PKViewAPI.h
//  PodioKit
//
//  Created by Sebastian Rehnby on 5/18/12.
//  Copyright (c) 2012 Citrix Systems, Inc. All rights reserved.
//

#import "PKBaseAPI.h"

@interface PKViewAPI : PKBaseAPI

+ (PKRequest *)requestForViewsForAppWithId:(NSUInteger)appId;

@end
