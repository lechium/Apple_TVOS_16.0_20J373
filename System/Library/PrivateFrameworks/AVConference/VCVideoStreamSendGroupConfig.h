//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMoments;

__attribute__((visibility("hidden")))
@interface VCVideoStreamSendGroupConfig
{
    VCMoments *_moments;	// 8 = 0x8
    int _captureSource;	// 16 = 0x10
}

- (void)setCaptureSource:(int)arg1;	// IMP=0x00000000000f4189
- (int)captureSource;	// IMP=0x00000000000f4179
@property(retain, nonatomic) VCMoments *moments; // @synthesize moments=_moments;
- (void)dealloc;	// IMP=0x00000000000f40f2

@end

