//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportEventOperation
{
    unsigned long long _uploadBatchId;	// 56 = 0x38
    NSData *_logMsg;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000009fc80c
- (void)main;	// IMP=0x00000000009fc761
- (id)initWithLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 remoteProxy:(id)arg3 runQueue:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000009fc6c4

@end

