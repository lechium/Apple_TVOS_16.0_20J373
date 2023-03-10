//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSURLAction, AMSURLSession, NSData, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol AMSURLHandling <NSObject>
@property(nonatomic) __weak AMSURLSession *session;
- (void)reconfigureNewRequest:(NSMutableURLRequest *)arg1 originalTask:(NSURLSessionTask *)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (AMSURLAction *)handleResponse:(NSURLResponse *)arg1 task:(NSURLSessionTask *)arg2;
- (AMSURLAction *)handleCompletionWithTask:(NSURLSessionTask *)arg1 metrics:(NSURLSessionTaskMetrics *)arg2 decodedObject:(id)arg3;
- (void)didCreateTask:(NSURLSessionTask *)arg1 fromRequest:(NSURLRequest *)arg2 error:(id *)arg3;
- (id)decodeData:(NSData *)arg1 task:(NSURLSessionTask *)arg2 error:(id *)arg3;

@optional
- (id)decodeMutableData:(NSMutableData *)arg1 task:(NSURLSessionTask *)arg2 error:(id *)arg3;
@end

