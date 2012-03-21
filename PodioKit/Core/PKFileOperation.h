//
//  PKFileRequestOperation.h
//  PodioKit
//
//  Created by Sebastian Rehnby on 11/21/11.
//  Copyright (c) 2011 Podio. All rights reserved.
//

#import "ASIFormDataRequest.h"
#import "PKRequest.h"

@interface PKFileOperation : ASIFormDataRequest {

@private
  PKRequestCompletionBlock requestCompletionBlock_;
}

@property (copy) PKRequestCompletionBlock requestCompletionBlock;

- (id)initWithURLString:(NSString *)urlString;

+ (PKFileOperation *)uploadOperationWithURLString:(NSString *)urlString filePath:(NSString *)filePath fileName:(NSString *)fileName;
+ (PKFileOperation *)imageUploadOperationWithURLString:(NSString *)urlString image:(UIImage *)image;

@end