//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsInterfaceFactory : NSObject
{
}

+ (id)sharedInterfaceFactory;	// IMP=0x00200000000d5fbb
+ (void)initialize;	// IMP=0x00100000000d5f5e
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x00200000000d6063
- (void)setup;	// IMP=0x00100000000d6010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
