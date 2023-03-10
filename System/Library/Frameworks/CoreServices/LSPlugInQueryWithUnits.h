//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSPlugInQuery.h"

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface LSPlugInQueryWithUnits : LSPlugInQuery
{
    NSArray *_pluginUnits;	// 16 = 0x10
    NSUUID *_dbUUID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007d241
- (void).cxx_destruct;	// IMP=0x000000000007d92f
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d45e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007d3e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d2f7
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;	// IMP=0x000000000007d249

@end

