//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLIOCommandQueue-Protocol.h>

@protocol MTLDevice;

@protocol MTLIOCommandQueueSPI <MTLIOCommandQueue>
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long globalTraceObjectID;
- (void)barrier;
@end
