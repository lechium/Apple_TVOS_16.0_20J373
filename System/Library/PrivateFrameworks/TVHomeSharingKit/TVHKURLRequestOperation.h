//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSData, NSError, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface TVHKURLRequestOperation : TVHKAsynchronousOperation
{
    NSURLRequest *_request;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSURLResponse *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSURLSession *_session;	// 40 = 0x28
    NSURLSessionDataTask *_task;	// 48 = 0x30
    unsigned long long _taskStartTime;	// 56 = 0x38
}

+ (id)new;	// IMP=0x0060000000038751
- (void).cxx_destruct;	// IMP=0x0000000000038d2a
@property(nonatomic) unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(copy, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(copy, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3;	// IMP=0x0000000000038c33
- (void)cancel;	// IMP=0x0000000000038bb5
- (void)executionDidBegin;	// IMP=0x00000000000389a7
@property(readonly, nonatomic) unsigned long long elapsedTimeInMilliseconds;
- (id)initWithRequest:(id)arg1 session:(id)arg2;	// IMP=0x0000000000038803
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000387ef
- (id)init;	// IMP=0x0000000000038780

@end

