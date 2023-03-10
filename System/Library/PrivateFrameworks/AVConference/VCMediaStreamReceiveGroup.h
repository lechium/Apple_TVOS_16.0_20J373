//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamReceiveGroup
{
    NSNumber *_optedInStreamID;	// 144 = 0x90
    NSNumber *_activeStreamID;	// 152 = 0x98
    _Bool _receivingEndToEndStream;	// 160 = 0xa0
    NSMutableDictionary *_streamToMaxNetworkBitrate;	// 168 = 0xa8
    NSMutableDictionary *_streamToActualNetworkBitrate;	// 176 = 0xb0
}

@property(retain, nonatomic) NSNumber *activeStreamID; // @synthesize activeStreamID=_activeStreamID;
@property(readonly, nonatomic) NSNumber *optedInStreamID; // @synthesize optedInStreamID=_optedInStreamID;
- (void)notifyChangeInActiveMediaBitrateTo:(unsigned int)arg1 from:(unsigned int)arg2;	// IMP=0x00000000001230c9
- (void)setupMaxBitrateMap;	// IMP=0x0000000000122d9b
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x0000000000122bb6
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;	// IMP=0x00000000001229d1
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;	// IMP=0x000000000012284c
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000001226c7
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)arg1;	// IMP=0x0000000000122382
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x00000000001222b7
- (void)dealloc;	// IMP=0x0000000000122220
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000121ed8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

