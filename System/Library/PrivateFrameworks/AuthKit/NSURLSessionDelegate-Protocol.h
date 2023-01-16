//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLSession;

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

