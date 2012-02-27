//
//  PKQuestionOptionData.h
//  PodioKit
//
//  Created by Sebastian Rehnby on 9/20/11.
//  Copyright 2011 Podio. All rights reserved.
//

#import "PKObjectData.h"

@interface PKQuestionOptionData : PKObjectData {

 @private
  NSInteger optionId_;
  NSString *text_;
}

@property (nonatomic) NSInteger optionId;
@property (nonatomic, copy) NSString *text;

@end
