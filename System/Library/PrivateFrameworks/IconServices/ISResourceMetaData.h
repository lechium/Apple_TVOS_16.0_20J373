//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ISResourceMetaData : NSObject
{
    _Bool _selectedVariant;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSNumber *_dimension;	// 24 = 0x18
    NSNumber *_scale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002deab
@property _Bool selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(retain) NSNumber *scale; // @synthesize scale=_scale;
@property(retain) NSNumber *dimension; // @synthesize dimension=_dimension;
@property(retain) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

