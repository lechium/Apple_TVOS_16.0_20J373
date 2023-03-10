//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPersonalizationRequest : MPModelRequest
{
    MPSectionedCollection *_radioStationTracks;	// 8 = 0x8
    _Bool _analyticsSignpostsEnabled;	// 16 = 0x10
}

+ (_Bool)requiresNetwork;	// IMP=0x00100000000df266
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000df25e
- (void).cxx_destruct;	// IMP=0x00000000000de846
@property(nonatomic) _Bool analyticsSignpostsEnabled; // @synthesize analyticsSignpostsEnabled=_analyticsSignpostsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de7af
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000de62d
- (id)initWithRadioStationTracks:(id)arg1;	// IMP=0x00000000000de49b
- (id)init;	// IMP=0x00000000000de45b

@end

