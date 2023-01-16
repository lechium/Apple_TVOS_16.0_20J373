//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterUnknownHelper
{
    short _alternateGroupID;	// 24 = 0x18
}

- (void)cancelWriting;	// IMP=0x0000000000096167
- (void)startWriting;	// IMP=0x000000000009607c
- (void)addInputGroup:(id)arg1;	// IMP=0x0000000000095cc8
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x0000000000095cb4
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000095974
- (void)addInput:(id)arg1;	// IMP=0x000000000009585c
- (_Bool)canAddInput:(id)arg1;	// IMP=0x0000000000095848
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000009578c
- (void)setSinglePassMediaDataSize:(long long)arg1;	// IMP=0x000000000009575b
- (void)setSinglePassFileSize:(long long)arg1;	// IMP=0x000000000009572a
- (void)setProducesCombinableFragments:(_Bool)arg1;	// IMP=0x00000000000956fb
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;	// IMP=0x00000000000956ca
- (void)setOutputFileTypeProfile:(id)arg1;	// IMP=0x0000000000095699
- (void)setInitialSegmentStartTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009566e
- (void)setPreferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000095643
- (void)setPreferredRate:(float)arg1;	// IMP=0x000000000009560e
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000955d9
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000955ae
- (void)setMovieTimeScale:(int)arg1;	// IMP=0x000000000009557f
- (void)setMetadata:(id)arg1;	// IMP=0x000000000009554e
- (void)setDirectoryForTemporaryFiles:(id)arg1;	// IMP=0x000000000009551d
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;	// IMP=0x00000000000954ee
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000954c3
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000095498
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000095467
- (long long)status;	// IMP=0x000000000009545f
- (void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3;	// IMP=0x0000000000095277
- (id)initWithURL:(id)arg1 fileType:(id)arg2;	// IMP=0x000000000009520c
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x0000000000095086

@end
