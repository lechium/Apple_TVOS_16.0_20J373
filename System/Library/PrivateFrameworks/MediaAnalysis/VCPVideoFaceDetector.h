//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceDetector
{
    int _angle;	// 8 = 0x8
    CDStruct_1b6d18a9 _timeLastDetection;	// 12 = 0xc
    NSMutableDictionary *_activeFaces;	// 40 = 0x28
    NSDictionary *_results;	// 48 = 0x30
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(_Bool)arg4 faceDominated:(_Bool)arg5 cancel:(CDUnknownBlockType)arg6;	// IMP=0x00600000001cd190
- (void).cxx_destruct;	// IMP=0x00000000001cd2bd
- (id)faceRanges;	// IMP=0x00000000001cd2b5
- (id)results;	// IMP=0x00000000001cd2a0

@end

