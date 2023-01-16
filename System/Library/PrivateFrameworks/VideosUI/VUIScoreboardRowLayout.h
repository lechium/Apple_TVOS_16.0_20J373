//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIScoreboardRowLayout : NSObject
{
    int _backgroundBlendMode;	// 8 = 0x8
    int _separatorBlendMode;	// 12 = 0xc
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_separatorColor;	// 24 = 0x18
}

+ (id)_bottomLayoutForIdiom:(long long)arg1;	// IMP=0x0060000000175cc2
+ (id)_topRowLayoutForIdiom:(long long)arg1;	// IMP=0x0060000000175c32
+ (int)_backgroundColorBlendMode;	// IMP=0x0060000000175c27
+ (id)_backgroundColorForIdiom:(long long)arg1;	// IMP=0x0060000000175bf8
- (void).cxx_destruct;	// IMP=0x0000000000175dac
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) int separatorBlendMode; // @synthesize separatorBlendMode=_separatorBlendMode;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int backgroundBlendMode; // @synthesize backgroundBlendMode=_backgroundBlendMode;

@end

