//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface VUIMonogramImageConfiguration : NSObject
{
    long long _style;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    UIFont *_font;	// 40 = 0x28
    UIColor *_bgColor;	// 48 = 0x30
    double _diameter;	// 56 = 0x38
    double _focusedSizeIncrease;	// 64 = 0x40
    UIColor *_textColor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000010b6ca
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010b4d1
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000010b3f1

@end

