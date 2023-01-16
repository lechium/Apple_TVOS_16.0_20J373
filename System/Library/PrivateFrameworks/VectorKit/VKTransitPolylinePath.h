//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKTransitPolylinePath
{
    unsigned long long _lineID;	// 136 = 0x88
    double _vertexEqualityTolerance;	// 144 = 0x90
}

@property(readonly, nonatomic) double vertexEqualityTolerance; // @synthesize vertexEqualityTolerance=_vertexEqualityTolerance;
- (id)description;	// IMP=0x0000000000313b49
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(void *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(_Bool)arg5 transform:(void *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9;	// IMP=0x0000000000313b0e
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(void *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(_Bool)arg5 transform:(void *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tileZ:(unsigned int)arg10 vertexPrecision:(unsigned char)arg11;	// IMP=0x0000000000313804

@end

