//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutRow : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    int _verticalAlignement;	// 12 = 0xc
    int _horizontalAlignement;	// 16 = 0x10
    _Bool _fixedItemSize;	// 20 = 0x14
    _UIFlowLayoutSection *_section;	// 24 = 0x18
    long long _index;	// 32 = 0x20
    NSMutableArray *_items;	// 40 = 0x28
    double _availableSpace;	// 48 = 0x30
    struct CGSize _rowSize;	// 56 = 0x38
    struct CGRect _rowFrame;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000036f2dc
- (id)init;	// IMP=0x000000000036ef9a

@end

