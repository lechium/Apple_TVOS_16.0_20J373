//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent
{
    NSString *_string;	// 16 = 0x10
    struct {
        unsigned int isWidthVariant:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010dded7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010dde9d
- (unsigned long long)hash;	// IMP=0x00000000010dde47
- (_Bool)_isContentEqualToContent:(id)arg1;	// IMP=0x00000000010dddd0
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x00000000010ddd4e
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000010ddd28
- (id)attributedString;	// IMP=0x00000000010ddcdb
- (id)string;	// IMP=0x00000000010ddcc6
- (_Bool)isNil;	// IMP=0x00000000010ddcb1
- (_Bool)isWidthVariant;	// IMP=0x00000000010ddc9f
- (_Bool)isAttributed;	// IMP=0x00000000010ddc97
- (long long)length;	// IMP=0x00000000010ddc7a
- (id)attributedStringContent;	// IMP=0x00000000010ddc1b
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;	// IMP=0x00000000010dda52
- (id)contentWithAttributedString:(id)arg1;	// IMP=0x00000000010dd9d1
- (id)contentWithString:(id)arg1;	// IMP=0x00000000010dd8c0
- (id)initWithString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x00000000010dd79e

@end

