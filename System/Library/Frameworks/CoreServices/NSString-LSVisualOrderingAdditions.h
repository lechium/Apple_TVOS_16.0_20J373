//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LSVisualOrderingAdditions)
+ (id)NSStringFromLSInstallType:(unsigned long long)arg1;	// IMP=0x00600000000d93d2
+ (id)NSStringFromLSInstallState:(unsigned long long)arg1;	// IMP=0x00600000000d938a
+ (id)NSStringFromLSInstallPhase:(unsigned long long)arg1;	// IMP=0x00600000000d9342
- (id)ls_visuallyOrderCharactersReturningError:(id *)arg1;	// IMP=0x00100000000ac2a6
- (_Bool)ls_matchesForPluginQuery:(id)arg1;	// IMP=0x00100000000fb28a
- (_Bool)ls_matchesStringForPluginQuery:(id)arg1;	// IMP=0x00100000000faec4
- (id)ls_cleanForPluginQuery;	// IMP=0x00100000000fadf4
@end
