#ifndef __PERFORMANCE_NODE_CHILDREN_TEST_H__
#define __PERFORMANCE_NODE_CHILDREN_TEST_H__

#include "PerformanceTest.h"
#include "support/CCProfiling.h"

class NodeChildrenMenuLayer : public PerformBasicLayer
{
public:
    NodeChildrenMenuLayer(bool bControlMenuVisible, int nMaxCases = 0, int nCurCase = 0);
    virtual void showCurrentTest();
    void dumpProfilerInfo(float dt);

    // overrides
    virtual void onExitTransitionDidStart() override;
    virtual void onEnterTransitionDidFinish() override;
};

class NodeChildrenMainScene : public Scene
{
public:
    virtual void initWithQuantityOfNodes(unsigned int nNodes);
    virtual std::string title();
    virtual std::string subtitle();
    virtual void updateQuantityOfNodes() = 0;

    void updateQuantityLabel();

    int getQuantityOfNodes() { return quantityOfNodes; }

protected:
    int    lastRenderedCount;
    int    quantityOfNodes;
    int    currentQuantityOfNodes;
};

class IterateSpriteSheet : public NodeChildrenMainScene
{
public:
    ~IterateSpriteSheet();
    virtual void updateQuantityOfNodes();
    virtual void initWithQuantityOfNodes(unsigned int nNodes);
    virtual void update(float dt) = 0;
    virtual const char* profilerName();

protected:
    SpriteBatchNode    *batchNode;
};

class IterateSpriteSheetForLoop : public IterateSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class IterateSpriteSheetIterator : public IterateSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class IterateSpriteSheetCArray : public IterateSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class AddRemoveSpriteSheet : public NodeChildrenMainScene
{
public:
    ~AddRemoveSpriteSheet();
    virtual void updateQuantityOfNodes();
    virtual void initWithQuantityOfNodes(unsigned int nNodes);
    virtual void update(float dt) = 0;
    virtual const char* profilerName();

protected:
    SpriteBatchNode    *batchNode;

#if CC_ENABLE_PROFILERS
    ProfilingTimer* _profilingTimer;
#endif
};

///

class CallFuncsSpriteSheetForEach : public IterateSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class CallFuncsSpriteSheetCMacro : public IterateSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

///

class AddSpriteSheet : public AddRemoveSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class RemoveSpriteSheet : public AddRemoveSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

class ReorderSpriteSheet : public AddRemoveSpriteSheet
{
public:
    virtual void update(float dt);

    virtual std::string title();
    virtual std::string subtitle();
    virtual const char* profilerName();
};

void runNodeChildrenTest();

#endif // __PERFORMANCE_NODE_CHILDREN_TEST_H__
