//
//  TumblrSharing.h
//  TumblrSharing
//
//  Created by Ash Furrow on 2012-08-27.
//  Copyright (c) 2012 AF. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TumblrSession : NSObject

@property (nonatomic, copy) NSString *host;
@property (nonatomic, strong) NSString *consumerKey;
@property (nonatomic, strong) NSString *consumerSecret;

@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *authSecret;

@property (nonatomic, readonly) NSArray *blogArray;
@property (nonatomic, readonly) NSString *defaultBlogName;

-(NSDictionary *)authenticateWithUserName:(NSString *)username password:(NSString *)password;
-(NSArray *)retrievListOfBlogs;
-(BOOL)postToTumblrDomain:(NSString *)domain title:(NSString *)title body:(NSString *)body;

@end
