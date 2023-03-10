//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSURLSession, NSURL, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSUINetworkImageFetchOperation
{
    NSURLSessionTask *_sessionTask;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    AMSURLSession *_URLSession;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingIsFinished;	// IMP=0x00600000000355e5
+ (id)keyPathsForValuesAffectingIsExecuting;	// IMP=0x0060000000035557
- (void).cxx_destruct;	// IMP=0x0000000000035dd1
@property(retain, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
- (id)_eagerlyDecompressImage:(id)arg1;	// IMP=0x0000000000035cba
- (void)_didCompleteTaskWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000035aa1
- (float)_sessionTaskPriorityForQueuePriority:(long long)arg1;	// IMP=0x0000000000035a77
- (void)cancel;	// IMP=0x0000000000035a0a
- (void)start;	// IMP=0x000000000003572a
- (void)setQueuePriority:(long long)arg1;	// IMP=0x000000000003566f
- (_Bool)isFinished;	// IMP=0x0000000000035611
- (_Bool)isExecuting;	// IMP=0x000000000003557b
- (_Bool)isAsynchronous;	// IMP=0x000000000003554f
- (id)initWithURL:(id)arg1 URLSession:(id)arg2;	// IMP=0x00000000000354ad

@end

