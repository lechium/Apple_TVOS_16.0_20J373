//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _MXExtensionLookupPolicy : NSObject
{
    NSPredicate *_extensionPredicate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016bed6
@property(retain, nonatomic) NSPredicate *extensionPredicate; // @synthesize extensionPredicate=_extensionPredicate;
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000016be50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

