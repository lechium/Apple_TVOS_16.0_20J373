//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHPentagonRecognitionResult
{
    struct CGPoint _center;	// 32 = 0x20
    struct CGSize _size;	// 48 = 0x30
}

@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) struct CGPoint center; // @synthesize center=_center;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5;	// IMP=0x00000000000a5830

@end

