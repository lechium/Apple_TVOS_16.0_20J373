//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController
{
    VCMockIDSDatagramChannel *_datagramChannel;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000002fb99c
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fbc99
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fbc4b
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fbbfd
- (void)invalidate;	// IMP=0x00000000002fbbb4
- (void)dealloc;	// IMP=0x00000000002fbb4f
- (id)datagramChannelRequiresOptions:(_Bool)arg1 dataPath:(int)arg2;	// IMP=0x00000000002fb9f5
- (id)datagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x00000000002fb9e1

@end
