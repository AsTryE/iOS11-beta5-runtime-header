/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRenderTask : NSObject {
    void * _priv;
}

+ (id)rendertaskWithInternalTask:(struct RenderTask { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; int x4; int x5; bool x6; unsigned long long x7; struct Node {} *x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; int x10; unsigned long long x11; struct __CFString {} *x12; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_1; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_2; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_3_2_1; } x_13_1_3; } x13; double x14; unsigned long long x15; unsigned long long x16; }*)arg1;

- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithInternalTask:(struct RenderTask { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; int x4; int x5; bool x6; unsigned long long x7; struct Node {} *x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; int x10; unsigned long long x11; struct __CFString {} *x12; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_1; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_2; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_3_2_1; } x_13_1_3; } x13; double x14; unsigned long long x15; unsigned long long x16; }*)arg1;
- (struct RenderTask { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; int x4; int x5; bool x6; unsigned long long x7; struct Node {} *x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; int x10; unsigned long long x11; struct __CFString {} *x12; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_1; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_2; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_3_2_1; } x_13_1_3; } x13; double x14; unsigned long long x15; unsigned long long x16; }*)internalRepresentation;
- (id)waitUntilCompletedAndReturnError:(id*)arg1;

@end
