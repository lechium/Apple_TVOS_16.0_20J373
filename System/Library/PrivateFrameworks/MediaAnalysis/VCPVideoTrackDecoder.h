//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject
{
    AVAssetTrack *_track;	// 8 = 0x8
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;	// IMP=0x0060000000182058
- (void).cxx_destruct;	// IMP=0x000000000018279f
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;	// IMP=0x000000000018275e
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x000000000018271d
- (long long)status;	// IMP=0x00000000001826dc
- (_Bool)validateDecodedFrame:(struct __CVBuffer *)arg1 withSettings:(id)arg2;	// IMP=0x0000000000182514
- (id)settings;	// IMP=0x000000000018232b
- (id)initWithTrack:(id)arg1;	// IMP=0x0000000000182165
- (id)init;	// IMP=0x0000000000182157

@end

