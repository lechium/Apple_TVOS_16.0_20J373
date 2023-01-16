//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPSectionedCollection, MPStoreLibraryPersonalizationResponse;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPersonalizationResponse : MPModelResponse
{
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;	// 8 = 0x8
    MPSectionedCollection *_radioStationTracks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000df050
@property(copy, nonatomic) MPSectionedCollection *radioStationTracks; // @synthesize radioStationTracks=_radioStationTracks;
- (void)dealloc;	// IMP=0x00000000000def99
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;	// IMP=0x00000000000dee38

// Remaining properties
@property(readonly, copy, nonatomic) MPSectionedCollection *results; // @dynamic results;

@end

