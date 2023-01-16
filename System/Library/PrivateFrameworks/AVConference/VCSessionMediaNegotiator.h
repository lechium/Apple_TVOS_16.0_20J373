//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo;
@protocol VCMediaNegotiatorProtocol;

__attribute__((visibility("hidden")))
@interface VCSessionMediaNegotiator : NSObject
{
    VCMediaNegotiatorLocalConfiguration *_localSettings;	// 8 = 0x8
    id <VCMediaNegotiatorProtocol> _activeNegotiator;	// 16 = 0x10
    NSMutableDictionary *_mediaNegotiatorMap;	// 24 = 0x18
}

+ (id)unserializeNegotiationData:(id)arg1;	// IMP=0x001000000011f8a7
+ (id)serializeNegotiationData:(id)arg1;	// IMP=0x001000000011f863
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x001000000011f69b
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;	// IMP=0x001000000011f41b
+ (id)negotiationDataWithVersion1:(id)arg1 version2:(id)arg2;	// IMP=0x001000000011ee66
+ (id)negotiationDataWithVersion:(int)arg1 mediaBlob:(id)arg2;	// IMP=0x001000000011edf0
+ (id)mediaBlobForVersion:(int)arg1 negotiationData:(id)arg2;	// IMP=0x001000000011ed95
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x000000000011f685
@property(readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property(readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x000000000011f16b
- (id)negotiationData;	// IMP=0x000000000011eeeb
- (void)dealloc;	// IMP=0x000000000011ed21
- (id)initWithLocalConfiguration:(id)arg1;	// IMP=0x000000000011eae7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

