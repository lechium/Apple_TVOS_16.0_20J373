//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLBarometerCalibrationSourceClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationSource : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationSourceClient> _delegate;	// 16 = 0x10
    _Bool _sourceEnabled;	// 24 = 0x18
}

- (void)disableSource;	// IMP=0x00200000001fb36a
- (void)enableSource;	// IMP=0x00100000001fb364
- (void)dealloc;	// IMP=0x00100000001fb32e
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000001fb27b

@end
