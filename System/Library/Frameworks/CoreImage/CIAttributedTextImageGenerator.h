//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSAttributedString, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAttributedTextImageGenerator : CIFilter
{
    NSAttributedString *inputText;	// 72 = 0x48
    NSNumber *inputScaleFactor;	// 80 = 0x50
    NSNumber *inputPadding;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000001711c1
@property(retain, nonatomic) NSNumber *inputPadding; // @synthesize inputPadding;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) NSAttributedString *inputText; // @synthesize inputText;
- (id)outputImage;	// IMP=0x0000000000171425

@end

