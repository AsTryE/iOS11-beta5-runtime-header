/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAnimatedVector2 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct aligned_storage_imp<8, 8> { union data_t { BOOL x_1_2_1[8]; struct a8 { } x_1_2_2; } x_1_1_1; } x1; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (void)double2AtTime:(double)arg1;
- (void)float2AtTime:(double)arg1;
- (unsigned long long)getDouble2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDouble2Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat2Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_2_1; } x_3_1_1; } x3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1 timeScale:(double)arg2;
- (void)setDouble2:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat2:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double

@end
