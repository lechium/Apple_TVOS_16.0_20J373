//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsRemoteCamera
{
    long long _captureSource;	// 40 = 0x28
}

+ (_Bool)isOfferSupported;	// IMP=0x0060000000268c6e
- (unsigned long long)minBandwidth;	// IMP=0x0000000000268dae
- (long long)tilesPerFrame;	// IMP=0x0000000000268d95
- (int)operatingMode;	// IMP=0x0000000000268d8a
- (long long)captureSource;	// IMP=0x0000000000268d79
- (long long)videoStreamMode;	// IMP=0x0000000000268d6e
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x0000000000268c76

@end

