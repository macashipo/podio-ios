//
//  PKSyncMap.h
//  PodioKit
//
//  Created by Sebastian Rehnby on 2011-07-04.
//  Copyright (c) 2012 Citrix Systems, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PKValueMapping.h"
#import "PKRelationshipMapping.h"
#import "PKCompoundMapping.h"
#import "PKStandaloneMapping.h"

/** A class defining how an NSDictionary should be mapped to the corresponding domain object's value properties.
 */
@interface PKObjectMapping : NSObject {

 @private
  NSMutableArray *mappings_;
  NSMutableDictionary *propertyMappings_;
  NSString *sequencePropertyName_;
}

@property (nonatomic, strong) NSMutableArray *mappings;
@property (nonatomic, strong) NSMutableDictionary *propertyMappings;
@property (nonatomic, copy) NSString *sequencePropertyName;

+ (id)mapping;

- (void)buildMappings;

+ (BOOL)shouldPerformMappingWithData:(NSDictionary *)data;

- (void)addMapping:(PKAttributeMapping *)mapping;

- (void)hasProperty:(NSString *)property forAttribute:(NSString *)attribute;

- (void)hasProperty:(NSString *)property 
       forAttribute:(NSString *)attribute 
              block:(PKValueMappingBlock)block;

- (void)hasProperty:(NSString *)property forParentProperty:(NSString *)parentProperty;

- (void)hasDateProperty:(NSString *)property forAttribute:(NSString *)attribute isUTC:(BOOL)isUTC;

- (void)hasRightsProperty:(NSString *)property forAttribute:(NSString *)attribute;

- (void)hasRelationship:(NSString *)property 
           forAttribute:(NSString *)attribute 
        inverseProperty:(NSString *)inverseProperty 
          objectMapping:(PKObjectMapping *)objectMapping;

- (void)hasMappingForAttribute:(NSString *)attribute 
                 objectMapping:(PKObjectMapping *)objectMapping 
           scopePredicateBlock:(PKScopePredicateBlock)scopePredicateBlock;

@end
