//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetReader, AVAssetReaderTrackOutput, NSDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackStandardDecoder
{
    AVAssetReader *_assetReader;	// 16 = 0x10
    AVAssetReaderTrackOutput *_trackOutput;	// 24 = 0x18
    struct opaqueCMSampleBuffer *_nextSample;	// 32 = 0x20
    long long _status;	// 40 = 0x28
    NSDictionary *_decoderSettings;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001c596a
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x00000000001c567c
- (long long)status;	// IMP=0x00000000001c566b
- (void)dealloc;	// IMP=0x00000000001c55c5
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 withSettings:(id)arg3 applyTransform:(_Bool)arg4;	// IMP=0x00000000001c52ec
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;	// IMP=0x00000000001c52d0

@end
