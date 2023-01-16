//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceSet : NSObject
{
    NSString *_ssid;	// 8 = 0x8
    NSMutableSet *_slices;	// 16 = 0x10
    struct CGRect _startRect;	// 24 = 0x18
    struct CGRect _endRect;	// 56 = 0x38
    double _leftWidth;	// 88 = 0x58
    double _rightWidth;	// 96 = 0x60
    double _mergePoint;	// 104 = 0x68
    NSMutableDictionary *_controlKeys;	// 112 = 0x70
}

+ (id)sliceSetWithDictionaryRepresenation:(id)arg1;	// IMP=0x0060000000b28da1
- (void).cxx_destruct;	// IMP=0x0000000000b294cc
@property(retain) NSMutableDictionary *controlKeys; // @synthesize controlKeys=_controlKeys;
@property double mergePoint; // @synthesize mergePoint=_mergePoint;
@property double rightWidth; // @synthesize rightWidth=_rightWidth;
@property double leftWidth; // @synthesize leftWidth=_leftWidth;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain) NSString *sliceSetID; // @synthesize sliceSetID=_ssid;
@property(readonly) NSMutableSet *slices; // @synthesize slices=_slices;
- (id)description;	// IMP=0x0000000000b291ec
- (void)addSlice:(id)arg1;	// IMP=0x0000000000b291d6
- (id)initWithSliceID:(id)arg1;	// IMP=0x0000000000b28bee

@end

