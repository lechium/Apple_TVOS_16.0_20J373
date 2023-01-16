//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFRichText *trailingSubtitle;
@property(retain, nonatomic) SFRichText *leadingSubtitle;
@property(nonatomic) _Bool cardPaddingBottom;
@property(copy, nonatomic) NSNumber *valueWeight;
@property(nonatomic) _Bool valueNoWrap;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *keyWeight;
@property(nonatomic) _Bool keyNoWrap;
@property(copy, nonatomic) NSString *key;
@property(retain, nonatomic) SFImage *attributionImage;
@property(retain, nonatomic) SFRichText *trailingText;
@property(retain, nonatomic) SFRichText *leadingText;
@property(nonatomic) _Bool imageIsRightAligned;
@property(retain, nonatomic) SFImage *image;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

