//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface WebVideoContainerLayer : CALayer
{
    struct RetainPtr<AVPlayerLayer> _playerLayer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000a4c0d0
- (void).cxx_destruct;	// IMP=0x0000000000a4c0a0
- (void)setPosition:(struct CGPoint)arg1;	// IMP=0x0000000000a4be50
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000a4bcb0
@property(retain, nonatomic) AVPlayerLayer *playerLayer;

@end

