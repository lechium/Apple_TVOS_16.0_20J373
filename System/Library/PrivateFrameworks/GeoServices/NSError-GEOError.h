//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (GEOError)
+ (id)geo_insufficientFilesystemCapacityWithBytesNeeded:(unsigned long long)arg1 bytesAvailable:(unsigned long long)arg2;	// IMP=0x00200000002b2198
+ (id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00200000002b2179
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00200000002b208f
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;	// IMP=0x00200000002b1f9a
+ (id)zilchDecoderErrorForNoSolution;	// IMP=0x0020000000731aac
+ (id)_geo_errorFromXPCError:(id)arg1;	// IMP=0x0020000000a28186
+ (id)_geo_errorFromXPCData:(id)arg1;	// IMP=0x0020000000a28122
- (id)zilchDecoderTileLoadingError;	// IMP=0x0010000000731ad4
- (id)_geo_newXPCData;	// IMP=0x0010000000a2831f
@property(readonly, nonatomic) _Bool _geo_isXPCInterruptedError;
@end

