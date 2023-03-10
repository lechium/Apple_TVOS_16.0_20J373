//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatParser : NSObject
{
    NSString *_visualFormat;	// 8 = 0x8
    unsigned long long _axis;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
}

+ (unsigned long long)axisForVisualFormat:(id)arg1;	// IMP=0x006000000027008c
+ (id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2;	// IMP=0x006000000026fdf8
+ (id)parserWithVisualFormat:(id)arg1;	// IMP=0x006000000026fdc9
- (void).cxx_destruct;	// IMP=0x0000000000270624
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(copy, nonatomic) NSString *visualFormat; // @synthesize visualFormat=_visualFormat;
- (void)_parse;	// IMP=0x0000000000270103
- (id)description;	// IMP=0x000000000026fd23
- (id)initWithVisualFormat:(id)arg1;	// IMP=0x000000000026fcb2

@end

