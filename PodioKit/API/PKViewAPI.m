//
//  PKViewAPI.m
//  PodioKit
//
//  Created by Sebastian Rehnby on 5/18/12.
//  Copyright (c) 2012 Citrix Systems, Inc. All rights reserved.
//

#import "PKViewAPI.h"

@implementation PKViewAPI

+ (PKRequest *)requestForViewsForAppWithId:(NSUInteger)appId {
  NSString *uri = [NSString stringWithFormat:@"/view/app/%ld/", (unsigned long)appId];
  PKRequest *request = [PKRequest requestWithURI:uri method:PKRequestMethodGET];
  
  return request;
}

@end
