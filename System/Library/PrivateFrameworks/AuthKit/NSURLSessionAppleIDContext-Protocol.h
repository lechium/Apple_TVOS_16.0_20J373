//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSObject-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSSet, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionAppleIDContext <NSObject, NSCopying, NSSecureCoding>
- (NSSet *)relevantHTTPStatusCodes;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAppleIDHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *))arg4;

@optional
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAppleIDRequestOrHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *, NSURLRequest *))arg4;
@end

