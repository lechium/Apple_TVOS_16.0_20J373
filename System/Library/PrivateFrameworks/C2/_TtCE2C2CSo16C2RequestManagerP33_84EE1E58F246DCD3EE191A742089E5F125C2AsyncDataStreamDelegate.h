//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHTTPURLResponse, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionTask;

@interface _TtCE2C2CSo16C2RequestManagerP33_84EE1E58F246DCD3EE191A742089E5F125C2AsyncDataStreamDelegate : NSObject
{
    MISSING_TYPE *responseConitnuation;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *bytesStreamContinuation;	// 1818784869 = 0x6c687465
}

- (void).cxx_destruct;	// IMP=0x000000000002f150
- (id)init;	// IMP=0x000000000002f0f0
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x000000000002f0e0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000002f020
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;	// IMP=0x000000000002ece0
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x000000000002ec10
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x000000000002ec00
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;	// IMP=0x000000000002e8a0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000002e820
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x000000000002e810
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;	// IMP=0x000000000002e520
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;	// IMP=0x000000000002e270

@end

