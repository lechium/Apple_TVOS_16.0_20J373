//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsiPadCompanion
{
    NSArray *_hdrModePixelFormats;	// 40 = 0x28
    NSMutableSet *_hdrModesSupported;	// 48 = 0x30
}

- (id)hdrModesSupported;	// IMP=0x0000000000268f84
- (id)hdrModePixelFormats;	// IMP=0x0000000000268f73
- (long long)tilesPerFrame;	// IMP=0x0000000000268f41
- (int)operatingMode;	// IMP=0x0000000000268f36
- (long long)captureSource;	// IMP=0x0000000000268f2b
- (long long)videoStreamMode;	// IMP=0x0000000000268f20
- (void)dealloc;	// IMP=0x0000000000268ea5
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x0000000000268db9

@end
