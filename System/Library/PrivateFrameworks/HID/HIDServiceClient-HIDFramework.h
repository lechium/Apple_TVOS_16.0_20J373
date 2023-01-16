//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDServiceClient.h>

@interface HIDServiceClient (HIDFramework)
@property(readonly) unsigned long long serviceID;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;	// IMP=0x003000000000313a
- (id)eventMatching:(id)arg1;	// IMP=0x0030000000003117
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x0030000000003103
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000030f0
- (id)propertiesForKeys:(id)arg1;	// IMP=0x00300000000030cd
- (id)propertyForKey:(id)arg1;	// IMP=0x00300000000030b8
@end
